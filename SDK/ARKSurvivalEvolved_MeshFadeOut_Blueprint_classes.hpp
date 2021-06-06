#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MeshFadeOut_Blueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MeshFadeOut_Blueprint.MeshFadeOut_Blueprint_C
// 0x0008 (0x04E0 - 0x04D8)
class AMeshFadeOut_Blueprint_C : public AFadingDestructibleActor
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeshFadeOut_Blueprint.MeshFadeOut_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MeshFadeOut_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
