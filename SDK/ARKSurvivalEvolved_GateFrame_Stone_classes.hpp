#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GateFrame_Stone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GateFrame_Stone.GateFrame_Stone_C
// 0x0010 (0x0AD0 - 0x0AC0)
class AGateFrame_Stone_C : public AFenceFoundation_Base_New_C
{
public:
	class USphereComponent*                            Sphere2;                                                  // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere1;                                                  // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GateFrame_Stone.GateFrame_Stone_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_GateFrame_Stone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
