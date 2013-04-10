#include <stdio.h>
#include <version.h>

int main(void) {
  printf("cmake-with-git-metadata->git branch: %s\n", GIT_BRANCH);
  printf("cmake-with-git-metadata->git abbreviated commit hash: %s\n", GIT_COMMIT_HASH);

  return 0;
}
