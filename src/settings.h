
#ifndef SENECA_SETTINGS_H
#define SENECA_SETTINGS_H
namespace seneca {

struct Settings {
    short m_maxSummaryWidth = 80; // Maximum width for displaying summaries
    bool m_tableView = false;     // Whether to display items in a table format
};

// Declaration of a global settings object
extern Settings g_settings;
}

#endif // SENECA_SETTINGS_H
