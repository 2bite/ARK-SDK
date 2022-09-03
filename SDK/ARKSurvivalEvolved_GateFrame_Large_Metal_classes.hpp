#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GateFrame_Large_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GateFrame_Large_Metal.GateFrame_Large_Metal_C
// 0x0010 (0x0AF8 - 0x0AE8)
class AGateFrame_Large_Metal_C : public AFenceFoundation_Base_New_C
{
public:
	class USphereComponent*                            Sphere2;                                                  // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere1;                                                  // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GateFrame_Large_Metal.GateFrame_Large_Metal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_GateFrame_Large_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
