/*
 * Copyright (C) 2011 TrintiyCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TRINITY_DB2STORES_H
#define TRINITY_DB2STORES_H

#include "Common.h"
#include "DB2fmt.h"
#include "DB2Store.h"
#include "DB2Structure.h"

#include <list>

extern std::map<uint32, DB2StorageBase*> sDB2PerHash;

extern DB2Storage <AreaGroupEntry>                  sAreaGroupStore;
extern DB2Storage <AreaGroupMemberEntry>            sAreaGroupMemberStore;
extern DB2Storage <SoundEntriesEntry>               sSoundEntriesStore;
extern DB2Storage <CurrencyTypesEntry>              sCurrencyTypesStore;
extern DB2Storage <PathNodeEntry>                   sPathNodeStore;
extern DB2Storage <GroupFinderActivityEntry>        sGroupFinderActivityStore;
extern DB2Storage <GroupFinderCategoryEntry>        sGroupFinderCategoryStore;
extern DB2Storage <LocationEntry>                   sLocationStore;
extern DB2Storage <ItemEntry>                       sItemStore;
extern DB2Storage <ItemBonusEntry>                  sItemStoreEntry;
extern DB2Storage <ItemBonusTreeNodeEntry>          sItemBonusTreeNodeStore;
extern DB2Storage <ItemXBonusTreeEntry>             sItemXBonusTreeStore;
extern DB2Storage <ItemCurrencyCostEntry>           sItemCurrencyCostStore;
extern DB2Storage <ItemExtendedCostEntry>           sItemExtendedCostStore;
extern DB2Storage <ItemSparseEntry>                 sItemSparseStore;
extern DB2Storage <ItemEffectEntry>                 sItemEffectStore;
extern DB2Storage <HeirloomEntry>                   sHeirloomStore;
extern DB2Storage <PvpItemEntry>                    sPvpItemStore;
extern DB2Storage <ItemModifiedAppearanceEntry>     sItemModifiedAppearanceStore;
extern DB2Storage <ItemAppearanceEntry>             sItemAppearanceStore;
extern DB2Storage <SpellReagentsEntry>              sSpellReagentsStore;
extern DB2Storage <SpellReagentsCurrencyEntry>      sSpellReagentsCurrencyStore;
extern DB2Storage <ItemUpgradeEntry>                sItemUpgradeStore;
extern DB2Storage <RulesetItemUpgradeEntry>         sRulesetItemUpgradeStore;
extern DB2Storage <SceneScriptEntry>                sSceneScriptStore;
extern DB2Storage <SceneScriptPackageEntry>         sSceneScriptPackageStore;
extern DB2Storage <TaxiNodesEntry>                  sTaxiNodesStore;
extern DB2Storage <TaxiPathEntry>                   sTaxiPathStore;
extern DB2Storage <TaxiPathNodeEntry>               sTaxiPathNodeStore;
extern DB2Storage <SpellRuneCostEntry>              sSpellRuneCostStore;
extern DB2Storage <SpellCastingRequirementsEntry>   sSpellCastingRequirementsStore;
extern DB2Storage <SpellAuraRestrictionsEntry>      sSpellAuraRestrictionsStore;
extern DB2Storage <AreaPOIEntry>                    sAreaPOIStore;
extern DB2Storage <HolidaysEntry>                   sHolidaysStore;
extern DB2Storage <OverrideSpellDataEntry>          sOverrideSpellDataStore;
extern DB2Storage <SpellEffectGroupSizeEntry>       sSpellEffectGroupSizeStore;
extern DB2Storage <SpellMiscEntry>                  sSpellMiscStore;
extern DB2Storage <SpellPowerEntry>                 sSpellPowerStore;
extern DB2Storage <SpellTotemsEntry>                sSpellTotemsStore;
extern DB2Storage <SpellClassOptionsEntry>          sSpellClassOptionsStore;
extern DB2Storage <SpellXSpellVisualEntry>          sSpellXSpellVisualStore;
extern DB2Storage <MapChallengeModeEntry>           sMapChallengeModeStore;
extern DB2Storage <QuestPackageItemEntry>           sQuestPackageItemStore;
extern DB2Storage <MountEntry>                      sMountStore;
extern DB2Storage <PlayerConditionEntry>            sPlayerConditionStore;
extern DB2Storage <VignetteEntry>                   sVignetteStore;
extern DB2Storage <GlyphRequiredSpecEntry>          sGlyphRequiredSpecStore;
extern DB2Storage <MailTemplateEntry>               sMailTemplateStore;
extern DB2Storage std::set<ResearchProjectEntry const*> sResearchProjectSet;
extern DB2Storage std::set<ResearchSiteEntry const*>    sResearchSiteSet;

//////////////////////////////////////////////////////////////////////////
/// Garrison DB2
//////////////////////////////////////////////////////////////////////////
extern DB2Storage <GarrSiteLevelEntry>              sGarrSiteLevelStore;
extern DB2Storage <GarrSiteLevelPlotInstEntry>      sGarrSiteLevelPlotInstStore;
extern DB2Storage <GarrPlotInstanceEntry>           sGarrPlotInstanceStore;
extern DB2Storage <GarrPlotEntry>                   sGarrPlotStore;
extern DB2Storage <GarrPlotUICategoryEntry>         sGarrPlotUICategoryStore;
extern DB2Storage <GarrMissionEntry>                sGarrMissionStore;
extern DB2Storage <GarrMissionRewardEntry>          sGarrMissionRewardStore;
extern DB2Storage <GarrMissionXEncouterEntry>       sGarrMissionXEncouterStore;
extern DB2Storage <GarrBuildingEntry>               sGarrBuildingStore;
extern DB2Storage <GarrPlotBuildingEntry>           sGarrPlotBuildingStore;
extern DB2Storage <GarrFollowerEntry>               sGarrFollowerStore;
extern DB2Storage <GarrAbilityEntry>                sGarrAbilityStore;
extern DB2Storage <GarrAbilityEffectEntry>          sGarrAbilityEffectStore;
extern DB2Storage <GarrFollowerXAbilityEntry>       sGarrFollowerXAbilityStore;
extern DB2Storage <GarrBuildingPlotInstEntry>       sGarrBuildingPlotInstStore;
extern DB2Storage <GarrMechanicTypeEntry>           sGarrMechanicTypeStore;
extern DB2Storage <GarrMechanicEntry>               sGarrMechanicStore;
extern DB2Storage <GarrEncouterXMechanicEntry>      sGarrEncouterXMechanicStore;
extern DB2Storage <GarrFollowerLevelXPEntry>        sGarrFollowerLevelXPStore;
extern DB2Storage <GarrSpecializationEntry>         sGarrSpecializationStore;
extern DB2Storage <CharShipmentEntry>               sCharShipmentStore;
extern DB2Storage <CharShipmentContainerEntry>      sCharShipmentContainerStore;
extern DB2Storage <SpecializationSpellEntry>        sSpecializationSpellStore;

//////////////////////////////////////////////////////////////////////////
/// Battle pet
//////////////////////////////////////////////////////////////////////////
extern DB2Storage<BattlePetAbilityEntry> sBattlePetAbilityStore;
extern DB2Storage<BattlePetAbilityEffectEntry> sBattlePetAbilityEffectStore;
extern DB2Storage<BattlePetAbilityTurnEntry> sBattlePetAbilityTurnStore;
extern DB2Storage<BattlePetAbilityStateEntry> sBattlePetAbilityStateStore;
extern DB2Storage<BattlePetStateEntry> sBattlePetStateStore;
extern DB2Storage<BattlePetEffectPropertiesEntry> sBattlePetEffectPropertiesStore;
extern DB2Storage<BattlePetBreedQualityEntry> sBattlePetBreedQualityStore;
extern DB2Storage<BattlePetBreedStateEntry> sBattlePetBreedStateStore;
extern DB2Storage<BattlePetSpeciesEntry> sBattlePetSpeciesStore;
extern DB2Storage<BattlePetSpeciesStateEntry> sBattlePetSpeciesStateStore;
extern DB2Storage<BattlePetSpeciesXAbilityEntry> sBattlePetSpeciesXAbilityStore;

extern DB2Storage <AuctionHouseEntry>            sAuctionHouseStore;
extern DB2Storage <BarberShopStyleEntry>         sBarberShopStyleStore;
extern DB2Storage <CharStartOutfitEntry>         sCharStartOutfitStore;
extern DB2Storage <ChrPowerTypesEntry>           sChrPowerTypesStore;
extern DB2Storage <CinematicSequencesEntry>      sCinematicSequencesStore;
extern DB2Storage <CreatureDisplayInfoEntry>     sCreatureDisplayInfoStore;
extern DB2Storage <CreatureTypeEntry>            sCreatureTypeStore;
extern DB2Storage <DestructibleModelDataEntry>   sDestructibleModelDataStore;
extern DB2Storage <DurabilityQualityEntry>       sDurabilityQualityStore;
extern DB2Storage <GlyphSlotEntry>               sGlyphSlotStore;
extern DB2Storage <GuildPerkSpellsEntry>         sGuildPerkSpellsStore;
extern DB2Storage <ImportPriceArmorEntry>        sImportPriceArmorStore;
extern DB2Storage <ImportPriceQualityEntry>      sImportPriceQualityStore;
extern DB2Storage <ImportPriceShieldEntry>       sImportPriceShieldStore;
extern DB2Storage <ImportPriceWeaponEntry>       sImportPriceWeaponStore;
extern DB2Storage <ItemPriceBaseEntry>           sItemPriceBaseStore;
extern DB2Storage <ItemClassEntry>               sItemClassStore;
extern DB2Storage <ItemDisenchantLootEntry>      sItemDisenchantLootStore;
extern DB2Storage <ItemLimitCategoryEntry>       sItemLimitCategoryStore;
extern DB2Storage <ItemRandomPropertiesEntry>    sItemRandomPropertiesStore;
extern DB2Storage <ItemRandomSuffixEntry>        sItemRandomSuffixStore;
extern DB2Storage <ItemSpecEntry>                sItemSpecStore;
extern DB2Storage <ItemSpecOverrideEntry>        sItemSpecOverrideStore;
extern DB2Storage <MountCapabilityEntry>         sMountCapabilityStore;
extern DB2Storage <MountTypeEntry>               sMountTypeStore;
extern DB2Storage <MountTypeXCapabilityEntry>    sMountTypeXCapabilityStore;
extern DB2Storage <NameGenEntry>                 sNameGenStore;
extern DB2Storage <QuestSortEntry>               sQuestSortStore;
extern DB2Storage <QuestV2Entry>                 sQuestV2Store;
extern DB2Storage <QuestXPEntry>                 sQuestXPStore;
extern DB2Storage <ResearchBranchEntry>          sResearchBranchStore;
extern DB2Storage <ResearchProjectEntry>         sResearchProjectStore;
extern DB2Storage <ResearchSiteEntry>            sResearchSiteStore;
extern DB2Storage <ScalingStatDistributionEntry> sScalingStatDistributionStore;
extern DB2Storage <ScenarioEntry>                sScenarioStore;
extern DB2Storage <SpellCastTimesEntry>          sSpellCastTimesStore;
extern DB2Storage <SpellDurationEntry>           sSpellDurationStore;
extern DB2Storage <SpellItemEnchantmentConditionEntry> sSpellItemEnchantmentConditionStore;
extern DB2Storage <SpellRadiusEntry>             sSpellRadiusStore;
extern DB2Storage <SpellRangeEntry>              sSpellRangeStore;
extern DB2Storage <SpellProcsPerMinuteEntry>     sSpellProcsPerMinuteStore;
extern DB2Storage <TotemCategoryEntry>           sTotemCategoryStore;
extern DB2Storage <TransportAnimationEntry>      sTransportAnimationStore;
extern DB2Storage <TransportRotationEntry>       sTransportRotationStore;
extern DB2Storage <WorldMapOverlayEntry>         sWorldMapOverlayStore;

SpellReagentsEntry const* GetSpellReagentEntry(uint32 spellId, uint8 reagent);
SpellTotemsEntry const* GetSpellTotemEntry(uint32 spellId, uint8 totem);

extern std::map<uint32, std::vector<uint32>> sItemEffectsByItemID;
extern std::map<uint32, std::vector<ItemBonusEntry const*>> sItemBonusesByID;
extern std::map<uint32, std::vector<ItemXBonusTreeEntry const*>> sItemBonusTreeByID;
extern std::map<uint32, std::vector<QuestPackageItemEntry const*>> sQuestPackageItemsByGroup;
extern MountCapabilitiesMap sMountCapabilitiesMap;

std::vector<ItemBonusEntry const*> const* GetItemBonusesByID(uint32 Id);
void LoadDB2Stores(const std::string& dataPath);

struct TaxiPathNodePtr
{
    TaxiPathNodePtr() : i_ptr(NULL) {}
    TaxiPathNodePtr(TaxiPathNodeEntry const* ptr) : i_ptr(ptr) {}
    TaxiPathNodeEntry const* i_ptr;
    operator TaxiPathNodeEntry const& () const { return *i_ptr; }
};

typedef Path<TaxiPathNodePtr, TaxiPathNodeEntry const> TaxiPathNodeList;
typedef std::vector<TaxiPathNodeList> TaxiPathNodesByPath;

extern TaxiPathNodesByPath                       sTaxiPathNodesByPath;
uint32 GetHeirloomItemLevel(uint32 curveId, uint32 level);
HeirloomEntry const* GetHeirloomEntryByItemID(uint32 p_ItemID);
std::vector<TaxiNodesEntry const*> const* GetTaxiNodesForMapId(uint32 l_MapID);

enum TaxiPathResult
{
    TAXIPATH_RES_SUCCESS = 1,
    TAXIPATH_RES_NO_LINKED_NODES,
    TAXIPATH_RES_UNKNOWN_NODES, ///> unused 6.1.0
    TAXIPATH_RES_NO_PATH,
};

class TaxiNode
{
    public:
        TaxiNode() { }
        TaxiNode(uint32 ID, uint32 map, Position& pos, LocalizedString const* name, uint32 cost) :
            m_id(ID), m_mapID(map), m_name(name), m_position(pos), m_cost(cost) { }

        uint32 GetID() { return m_id; }

        void AddConnectedNode(uint32 node) { m_connectedNodes.insert(node); }
        TaxiNode* GetClosestNodeTo(TaxiNode* node, std::set<uint32>& closed, Player* player);
        Position const* GetPosition() { return &m_position; }
        uint32 GetCost() { return m_cost; }
        TaxiNodesEntry const* GetTaxiNodesEntry() { return sTaxiNodesStore.LookupEntry(m_id); }

    private:
        uint32 m_id;
        uint32 m_mapID;
        Position m_position;
        LocalizedString const* m_name;
        uint32 m_cost;
        std::set<uint32> m_connectedNodes;
};
typedef std::unordered_map<uint32, TaxiNode*> TaxiNodes;

class TaxiPath : public std::vector<TaxiNode*>
{
public:
    TaxiPath() { }
    bool LoadExpress(std::vector<uint32> uNodes);
    uint32 CalculateTaxiPath(uint32 startId, uint32 destId, Player* player);

public:
    uint32 GetCost()
    {
        uint32 cost = 0;
        for (const_iterator itr = begin(); itr != end(); ++itr)
            cost += (*itr)->GetCost();

        return cost;
    }
};

TaxiNode* GetTaxiNodeByID(uint32 ID);

struct TaxiPathBySourceAndDestination
{
    TaxiPathBySourceAndDestination() : ID(0), price(0) {}
    TaxiPathBySourceAndDestination(uint32 _id, uint32 _price) : ID(_id), price(_price) {}

    uint32    ID;
    uint32    price;
};

typedef std::map<uint32, TaxiPathBySourceAndDestination> TaxiPathSetForSource;
typedef std::map<uint32, TaxiPathSetForSource> TaxiPathSetBySource;
typedef std::unordered_map<uint32, std::vector<TaxiNodesEntry const*> > TaxiNodesByMap;

#define TaxiMaskSize 215
typedef uint8 TaxiMask[TaxiMaskSize];

extern TaxiMask                                  sTaxiNodesMask;
extern TaxiMask                                  sOldContinentsNodesMask;
extern TaxiMask                                  sHordeTaxiNodesMask;
extern TaxiMask                                  sAllianceTaxiNodesMask;
extern TaxiMask                                  sDeathKnightTaxiNodesMask;
extern TaxiPathSetBySource                       sTaxiPathSetBySource;

#endif
