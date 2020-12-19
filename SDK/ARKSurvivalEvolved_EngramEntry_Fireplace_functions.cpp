// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Fireplace_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Fireplace.EngramEntry_Fireplace_C.ExecuteUbergraph_EngramEntry_Fireplace
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Fireplace_C::ExecuteUbergraph_EngramEntry_Fireplace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Fireplace.EngramEntry_Fireplace_C.ExecuteUbergraph_EngramEntry_Fireplace");

	UEngramEntry_Fireplace_C_ExecuteUbergraph_EngramEntry_Fireplace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
