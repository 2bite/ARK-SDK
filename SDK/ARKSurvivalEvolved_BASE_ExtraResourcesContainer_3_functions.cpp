// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BASE_ExtraResourcesContainer_3_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BASE_ExtraResourcesContainer_3.BASE_ExtraResourcesContainer_2_C.ExecuteUbergraph_BASE_ExtraResourcesContainer_3
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBASE_ExtraResourcesContainer_2_C::ExecuteUbergraph_BASE_ExtraResourcesContainer_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BASE_ExtraResourcesContainer_3.BASE_ExtraResourcesContainer_2_C.ExecuteUbergraph_BASE_ExtraResourcesContainer_3");

	UBASE_ExtraResourcesContainer_2_C_ExecuteUbergraph_BASE_ExtraResourcesContainer_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
