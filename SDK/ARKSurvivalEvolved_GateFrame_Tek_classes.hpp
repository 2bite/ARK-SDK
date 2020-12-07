#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GateFrame_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GateFrame_Tek.GateFrame_Tek_C
// 0x0018 (0x0AD8 - 0x0AC0)
class AGateFrame_Tek_C : public AFenceFoundation_Base_New_C
{
public:
	class USphereComponent*                            Sphere2;                                                  // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere1;                                                  // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GateFrame_Tek.GateFrame_Tek_C");
		return ptr;
	}


	bool BPAllowSnappingWith(class APrimalStructure** OtherStructure, class APlayerController** ForPC);
	void UserConstructionScript();
	void ExecuteUbergraph_GateFrame_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
