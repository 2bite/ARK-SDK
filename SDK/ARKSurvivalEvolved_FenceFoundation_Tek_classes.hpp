#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FenceFoundation_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FenceFoundation_Tek.FenceFoundation_Tek_C
// 0x0008 (0x0AA8 - 0x0AA0)
class AFenceFoundation_Tek_C : public AFenceFoundation_Base_New_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FenceFoundation_Tek.FenceFoundation_Tek_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_FenceFoundation_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
