"""Functions for organizing and calculating student exam scores."""

def round_scores(student_scores:int) -> int:
    """Round all provided student scores.

    :param student_scores: list - float or int of student exam scores.
    :return: list - student scores *rounded* to nearest integer value.
    """
    rounded_scores = [round(score) for score in student_scores]
    return rounded_scores

        


def count_failed_students(student_scores:int) -> int:
    """Count the number of failing students out of the group provided.

    :param student_scores: list - containing int student scores.
    :return: int - count of student scores at or below 40.
    """
    failed_scores = [score for score in student_scores if score <= 40]
    return len(failed_scores)
    

    


def above_threshold(student_scores: int, threshold: int) ->int:
    """Determine how many of the provided student scores were 'the best' based on the provided threshold.

    :param student_scores: list - of integer scores.
    :param threshold: int - threshold to cross to be the "best" score.
    :return: list - of integer scores that are at or above the "best" threshold.
    """

    above_ones = [score for score in student_scores if score >= threshold]
    return above_ones


def letter_grades(highest: int) ->int:
    """Create a list of grade thresholds based on the provided highest grade.

    :param highest: int - value of highest exam score.
    :return: list - of lower threshold scores for each D-A letter grade interval.
            For example, where the highest score is 100, and failing is <= 40,
            The result would be [41, 56, 71, 86]:

            41 <= "D" <= 55
            56 <= "C" <= 70
            71 <= "B" <= 85
            86 <= "A" <= 100
    """
    step = int((highest-40)/4)
    return [41 + step*s for s in range(0,4)]


def student_ranking(student_scores: int, student_names: int) -> int:
    """Organize the student's rank, name, and grade information in ascending order.

    :param student_scores: list - of scores in descending order.
    :param student_names: list - of string names by exam score in descending order.
    :return: list - of strings in format ["<rank>. <student name>: <score>"].
    """

    ranking = []
    for index, (score, name) in enumerate(zip(student_scores, student_names), 1):
        entry = f"{index}. {name}: {score}"
        ranking.append(entry)

    return ranking
        


def perfect_score(student_info:int) -> int:
    """Create a list that contains the name and grade of the first student to make a perfect score on the exam.

    :param student_info: list - of [<student name>, <score>] lists.
    :return: list - first `[<student name>, 100]` or `[]` if no student score of 100 is found.
    """
    perfect_scores = [[name, grade] for name, grade in student_info if grade == 100]
    return perfect_scores[0] if perfect_scores else []    