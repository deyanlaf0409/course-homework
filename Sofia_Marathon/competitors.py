class Competitor:
    """
     docstring
     """
    def __init__(self, registration_number, name, last_name, start_time, finish_time):
        """
         docstring
         """
        self._registration_number = registration_number
        self._name = name
        self._last_name = last_name
        self._start_time = start_time
        self._finish_time = finish_time

    def __str__(self):
        """
         docstring
         """
        return f"{self._registration_number}|{self._name}|{self._last_name}|{self._start_time}|{self._finish_time}"

    def race_time(self):
        """
         docstring
         """
        return self._finish_time.time_diff()

    @property
    def registration_number(self):
        return self._registration_number

    @registration_number.setter
    def registration_number(self, value):
        self._registration_number = value

    @property
    def name(self):
        return self._name

    @name.setter
    def name(self, value):
        self._name = value

    @property
    def last_name(self):
        return self._last_name

    @last_name.setter
    def last_name(self, value):
        self._last_name = value

    @property
    def start_time(self):
        return self._start_time

    @start_time.setter
    def start_time(self, value):
        self._start_time = value

    @property
    def finish_time(self):
        return self._finish_time

    @finish_time.setter
    def finish_time(self, value):
        self._finish_time = value





