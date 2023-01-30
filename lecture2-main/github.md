# GitHub Workflow

## Useful commands

```sh
# step 1: clone
git clone https://github.com/TT00FE39-3001/lecture2
# step 2: Create a new project in GitHub
# step 3:Change Git Remote Origin to the newly created repo
git remote set-url origin <your_repo_url>
# verify
git remote -v
# step 4:create a new branch and e.g answers
git checkout -b <new_branch>

# step 5:
# make sure that the target branch exists
git branch
# you can also switch from the main branch to the new_branch by executing git switch commands
$ git switch <new_branch>
# step 6: make changes
git add .
git commit -m "meaningful message "
# step 7: push to github
git push -u origin <branch name>
#Alternatively:
git push --set-upstream origin <branch name>
```

## Links

- [How To Switch Branch on Git](https://devconnected.com/how-to-switch-branch-on-git/)
- [How To Change Git Remote Origin](https://devconnected.com/how-to-change-git-remote-origin/)
- [GitHub: Personal Access Token](https://ginnyfahs.medium.com/github-error-authentication-failed-from-command-line-3a545bfd0ca8)
