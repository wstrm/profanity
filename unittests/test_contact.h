void contact_in_group(void **state);
void contact_not_in_group(void **state);
void contact_name_when_name_exists(void **state);
void contact_jid_when_name_not_exists(void **state);
void contact_string_when_name_exists(void **state);
void contact_string_when_name_not_exists(void **state);
void contact_string_when_default_resource(void **state);
void contact_presence_offline(void **state);
void contact_presence_uses_highest_priority(void **state);
void contact_presence_chat_when_same_prioroty(void **state);
void contact_presence_online_when_same_prioroty(void **state);
void contact_presence_away_when_same_prioroty(void **state);
void contact_presence_xa_when_same_prioroty(void **state);
void contact_presence_dnd(void **state);
void contact_subscribed_when_to(void **state);
void contact_subscribed_when_both(void **state);
void contact_not_subscribed_when_from(void **state);
void contact_not_subscribed_when_no_subscription_value(void **state);
void contact_not_available(void **state);
void contact_not_available_when_highest_priority_away(void **state);
void contact_not_available_when_highest_priority_xa(void **state);
void contact_not_available_when_highest_priority_dnd(void **state);
void contact_available_when_highest_priority_online(void **state);
void contact_available_when_highest_priority_chat(void **state);