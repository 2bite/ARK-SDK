#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSeatingMusicBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureSeatingMusicBaseBP.StructureSeatingMusicBaseBP_C
// 0x0010 (0x0F00 - 0x0EF0)
class AStructureSeatingMusicBaseBP_C : public APrimalStructureSeatingMusic
{
public:
	class UChildActorComponent*                        TargetingEmitter;                                         // 0x0EF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0EF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureSeatingMusicBaseBP.StructureSeatingMusicBaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StructureSeatingMusicBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
