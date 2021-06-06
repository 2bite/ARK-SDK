#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTekCavePortalTerminal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C
// 0x0028 (0x0B10 - 0x0AE8)
class AStructureTekCavePortalTerminal_C : public AStructureBaseBP_C
{
public:
	class UClass*                                      TeleporterBaseClass;                                      // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnTeleporterPoint;                                     // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ADungeonArenaManager_C*                      TheDungeonManager;                                        // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class UClass*>                              TeleporterDifficultyClasses;                              // 0x0B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C");
		return ptr;
	}


	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void UserConstructionScript();
	void ExecuteUbergraph_StructureTekCavePortalTerminal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
