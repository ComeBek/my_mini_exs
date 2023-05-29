
#ComeBek#

def last_word(string):
    # Проверяем наличие запятой в строке
    if ',' in string:
        # Если запятая есть, берем слово, следующее за ней
        words = string.split(',')
        if len(words) > 1:
            last_word = words[1].strip()
        else:
            last_word = ""
    else:
        # Если запятой нет, берем последнее слово в строке
        words = string.split()
        if words:
            last_word = words[-1]
            last_word = last_word.strip('.?!,-')
        else:
            last_word = ''
    return last_word