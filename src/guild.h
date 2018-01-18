#ifndef __CISCORD_GUILD_H__
#define __CISCORD_GUILD_H__

typedef struct {
	SNOWFLAKE id;
	const char * name;
	SNOWFLAKE guild_id;
	const char * icon;
	bool owner;
	SNOWFLAKE ownerid;
	//Dpermissions_t permissions;
	const char * region;
	SNOWFLAKE afk_channel_id;
	int afk_timeout;
	bool embed_enabled;
	SNOWFLAKE embed_channel_id;
	int verification_level;
	int default_message_notifications;
	int explicit_content_filter;
	//ld_role_t * roles;
	//ld_emoji_t emojis[50];
	int mfa_level;
	SNOWFLAKE application_id;
	bool widget_enabled;
	SNOWFLAKE widget_channel_id;
	SNOWFLAKE system_channel_id;
	
	// only in GUILD_CREATE events:
	time_t joined_at;
	bool large;
	bool unavailable;
	int member_count;
	//ld_voicestate_t voice_states;
	//ld_user_t * members;
	ld_chan_t channels;
	//ld_presence_t * presences;
	
	// extra feilds (array lengths, etc)
	int Nroles, Nemojis, Nchannels, Nmembers;
} ld_guild_t;

#endif
