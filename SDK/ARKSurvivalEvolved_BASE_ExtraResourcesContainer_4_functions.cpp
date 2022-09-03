// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BASE_ExtraResourcesContainer_4_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BASE_ExtraResourcesContainer_4.BASE_ExtraResourcesContainer_3_C.ExecuteUbergraph_BASE_ExtraResourcesContainer_4
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBASE_ExtraResourcesContainer_3_C::ExecuteUbergraph_BASE_ExtraResourcesContainer_4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BASE_ExtraResourcesContainer_4.BASE_ExtraResourcesContainer_3_C.ExecuteUbergraph_BASE_ExtraResourcesContainer_4");

	UBASE_ExtraResourcesContainer_3_C_ExecuteUbergraph_BASE_ExtraResourcesContainer_4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
