// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Fishbasket_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Fishbasket.EngramEntry_Fishbasket_C.ExecuteUbergraph_EngramEntry_Fishbasket
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Fishbasket_C::ExecuteUbergraph_EngramEntry_Fishbasket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Fishbasket.EngramEntry_Fishbasket_C.ExecuteUbergraph_EngramEntry_Fishbasket");

	UEngramEntry_Fishbasket_C_ExecuteUbergraph_EngramEntry_Fishbasket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
