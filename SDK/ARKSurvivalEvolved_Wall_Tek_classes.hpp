#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wall_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wall_Tek.Wall_Tek_C
// 0x0008 (0x0AA8 - 0x0AA0)
class AWall_Tek_C : public AWall_Base_Small_SM_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wall_Tek.Wall_Tek_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Wall_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
