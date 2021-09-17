# CONTRIBUTION GUIDELINES

## Before contributing

Welcome to [World-org/Books](https://github.com/World-org/Books)! 
Before submitting pull requests, please make sure that you have **read the whole guidelines**. If you have any doubts about this contribution guide, please open [an issue](https://github.com/World-org/Books/issues/new).

## Contributing

### Contributor

Being a contributor at The World-org, we request you to follow the points mentioned below:

- You did a new work.
  - No duplication allowed. This work will not be merged.
- Please follow the repository guidelines and standards mentioned below.

**New implementation** New implementations are welcome!

### Making Changes

#### Documentation

- Please avoid creating new directories if at all possible. Try to fit your work into the existing directory structure. If you want to create a new directory, then please check if a similar category has been recently suggested or created by other pull requests.
- If you have modified/added documentation, please ensure that your language is concise and must not contain grammatical errors.
- Do not update [`README.md`](https://github.com/World-org/Books/blob/master/README.md) along with other changes. First, create an issue and then link to that issue in your pull request to suggest specific changes required to [`README.md`](https://github.com/World-org/Books/blob/master/README.md).

#### New Directory guidelines

- We recommend adding files to existing directories as much as possible.
- Use lowercase words with spaces as separator ( no ```"_"``` or ```"-"``` allowed ) for directories.
- For instance

```markdown
SomeNew Fancy-Category          is incorrect
Some New Fancy Category         is correct
```

#### New File Names guidelines

- We recommend adding files to existing directories as much as possible.
- Use lowercase words with ``"_"`` as separator ( no ```"-"``` allowed ) for files
- For instance

```markdown
SomeNew Fancy-Category          is incorrect
some_new_fancy_category         is correct
```
<!-- 
- Filepaths will be used to dynamically create a directory.
- Filepath validation will run on GitHub Actions to ensure compliance. -->

#### Commit Guidelines

- Try to modify just one file in the same directory. Pull requests that span multiple directories are often rejected.

When fixing an issue - 
```bash
git checkout -b <issue number>
git add file_xyz.cpp
git commit -m "your message"
```

Common prefixes:

- fix: A bug fix
- feat: A new feature
- docs: Documentation changes
- website: Improvement in website content

### Pull Requests

- Checkout our [pull request templates](https://github.com/World-org/Books/tree/master/.github/pull_request_templates)

Happy contributing!❤️

