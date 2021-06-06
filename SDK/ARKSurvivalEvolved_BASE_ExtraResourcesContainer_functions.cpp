// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BASE_ExtraResourcesContainer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BASE_ExtraResourcesContainer.BASE_ExtraResourcesContainer_C.ExecuteUbergraph_BASE_ExtraResourcesContainer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBASE_ExtraResourcesContainer_C::ExecuteUbergraph_BASE_ExtraResourcesContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BASE_ExtraResourcesContainer.BASE_ExtraResourcesContainer_C.ExecuteUbergraph_BASE_ExtraResourcesContainer");

	UBASE_ExtraResourcesContainer_C_ExecuteUbergraph_BASE_ExtraResourcesContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
