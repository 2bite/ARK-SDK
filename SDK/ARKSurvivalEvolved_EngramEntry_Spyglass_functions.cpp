// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Spyglass_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Spyglass.EngramEntry_Spyglass_C.ExecuteUbergraph_EngramEntry_Spyglass
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Spyglass_C::ExecuteUbergraph_EngramEntry_Spyglass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Spyglass.EngramEntry_Spyglass_C.ExecuteUbergraph_EngramEntry_Spyglass");

	UEngramEntry_Spyglass_C_ExecuteUbergraph_EngramEntry_Spyglass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
