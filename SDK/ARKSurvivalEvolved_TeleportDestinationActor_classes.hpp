#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TeleportDestinationActor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TeleportDestinationActor.TeleportDestinationActor_C
// 0x0030 (0x0498 - 0x0468)
class ATeleportDestinationActor_C : public AActor
{
public:
	class UArrowComponent*                             ForwardArrow;                                             // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TitleComp;                                                // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        DestinationTitleComp;                                     // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBillboardComponent*                         DestinationIcon;                                          // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      DestinationTitle;                                         // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TeleportDestinationActor.TeleportDestinationActor_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TeleportDestinationActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
