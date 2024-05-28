import os
import fnmatch

def search_and_remove_unnecessary_elements(directory):
    """
    Searches for unnecessary elements in the given directory and removes them.

    Args:
        directory (str): The directory to search in.

    Returns:
        list: A list of unnecessary elements found and removed in the directory.
    """
    unnecessary_elements = []

    # Read the .gitignore file
    with open(os.path.join(directory, '.gitignore'), 'r') as gitignore_file:
        gitignore_patterns = [line.strip() for line in gitignore_file if line.strip() and not line.startswith('#')]

    for root, dirs, files in os.walk(directory):
        if '.git' in dirs:
            dirs.remove('.git')  # Exclude .git directory from further traversal

        # Remove directories matching .gitignore patterns
        for pattern in gitignore_patterns:
            matched_dirs = fnmatch.filter(dirs, pattern)
            for dir_name in matched_dirs:
                dir_to_remove = os.path.join(root, dir_name)
                try:
                    #os.rmdir(dir_to_remove)
                    unnecessary_elements.append(dir_to_remove)
                    print(f"Directory removed: {dir_to_remove}")
                except OSError:
                    # Directory is not empty or cannot be removed
                    pass

        # Remove files matching .gitignore patterns
        for pattern in gitignore_patterns:
            matched_files = fnmatch.filter(files, pattern)
            for file_name in matched_files:
                file_to_remove = os.path.join(root, file_name)
                try:
                    #os.remove(file_to_remove)
                    unnecessary_elements.append(file_to_remove)
                    print(f"File removed: {file_to_remove}")
                except OSError:
                    # File cannot be removed
                    pass

    return unnecessary_elements

# Get the directory of the current file
directory = os.path.abspath(os.path.dirname(__file__))

# Search for unnecessary elements in the directory
unnecessary_elements = search_and_remove_unnecessary_elements(directory)

if unnecessary_elements:
    print("Unnecessary elements found:")
    for element in unnecessary_elements:
        print(element)
        # Uncomment the line below to delete the unnecessary elements
        os.remove(element)
else:
    print("No unnecessary elements found.")
