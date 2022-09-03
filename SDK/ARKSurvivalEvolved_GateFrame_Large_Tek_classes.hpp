#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GateFrame_Large_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GateFrame_Large_Tek.GateFrame_Large_Tek_C
// 0x0020 (0x0B08 - 0x0AE8)
class AGateFrame_Large_Tek_C : public AFenceFoundation_Base_New_C
{
public:
	class USphereComponent*                            Sphere2;                                                  // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere1;                                                  // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GateFrame_Large_Tek.GateFrame_Large_Tek_C");
		return ptr;
	}


	bool BPAllowSnappingWith(class APrimalStructure** OtherStructure, class APlayerController** ForPC);
	void UserConstructionScript();
	void ExecuteUbergraph_GateFrame_Large_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
