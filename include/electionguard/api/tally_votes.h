#ifndef __API_TALLY_VOTES_H__
#define __API_TALLY_VOTES_H__

#include <electionguard/api/config.h>
#include <electionguard/decryption/coordinator.h>
#include <electionguard/decryption/trustee.h>

/**
 * Perform all the steps necessary to tally the encypted ballots file and decrypt the tallies. */
bool API_TallyVotes(struct api_config config,
                    struct trustee_state *trustee_states,
                    uint32_t num_decrypting_trustees,
                    char *ballots_filename, 
                    char *export_path,
                    char *filename_prefix,
                    char **output_filename);

/**
 * Free the bytes allocated by TallyVotes */
void API_TallyVotes_free(char *output_filename);                                         

#endif /* __API_TALLY_VOTES_H__ */