#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FenceFoundation_Base_New_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FenceFoundation_Base_New.FenceFoundation_Base_New_C
// 0x0000 (0x0AE8 - 0x0AE8)
class AFenceFoundation_Base_New_C : public AStructureBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FenceFoundation_Base_New.FenceFoundation_Base_New_C");
		return ptr;
	}


	void NewFunction_1();
	void UserConstructionScript();
	void ExecuteUbergraph_FenceFoundation_Base_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
