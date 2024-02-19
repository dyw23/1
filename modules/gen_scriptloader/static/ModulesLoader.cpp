/*
 * This file is part of the AzerothCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Affero General Public License as published by the
 * Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

// This file was created automatically from your script configuration!
// Use CMake to reconfigure this file, never change it on your own!

/* #undef ACORE_IS_DYNAMIC_SCRIPTLOADER */

#include "Define.h"
#include <vector>
#include <string>

// Add deprecated api loaders include

// Includes list
void Addmod_1v1_arenaScripts();
void Addmod_account_achievementsScripts();
void Addmod_ah_botScripts();
void Addmod_bg_item_rewardScripts();
void Addmod_challenge_modesScripts();
void Addmod_elunaScripts();
void Addmod_gain_honor_guardScripts();
void Addmod_guildfundsScripts();
void Addmod_learn_spellsScripts();
void Addmod_pvp_titlesScripts();
void Addmod_random_enchantsScripts();
void Addmod_reagent_bankScripts();
void Addmod_solo_lfgScripts();
void Addmod_transmogScripts();

#ifdef ACORE_IS_DYNAMIC_SCRIPTLOADER
#  include "revision.h"
#  define AC_MODULES_API AC_API_EXPORT
extern "C" {

/// Exposed in script module to return the name of the script module
/// contained in this shared library.
AC_MODULES_API char const* GetScriptModule()
{
    return "static";
}

#else
#  include "ModulesScriptLoader.h"
#  define AC_MODULES_API
#endif

/// Exposed in script modules to register all scripts to the ScriptMgr.
AC_MODULES_API void AddModulesScripts()
{
    // Modules
    Addmod_1v1_arenaScripts();
    Addmod_account_achievementsScripts();
    Addmod_ah_botScripts();
    Addmod_bg_item_rewardScripts();
    Addmod_challenge_modesScripts();
    Addmod_elunaScripts();
    Addmod_gain_honor_guardScripts();
    Addmod_guildfundsScripts();
    Addmod_learn_spellsScripts();
    Addmod_pvp_titlesScripts();
    Addmod_random_enchantsScripts();
    Addmod_reagent_bankScripts();
    Addmod_solo_lfgScripts();
    Addmod_transmogScripts();

    // Deprecated api modules
}

/// Exposed in script modules to get the build directive of the module.
AC_MODULES_API char const* GetModulesBuildDirective()
{
    return _BUILD_DIRECTIVE;
}

#ifdef ACORE_IS_DYNAMIC_SCRIPTLOADER
} // extern "C"
#endif
