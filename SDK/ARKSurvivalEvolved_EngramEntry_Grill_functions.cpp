// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Grill_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Grill.EngramEntry_Grill_C.ExecuteUbergraph_EngramEntry_Grill
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Grill_C::ExecuteUbergraph_EngramEntry_Grill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Grill.EngramEntry_Grill_C.ExecuteUbergraph_EngramEntry_Grill");

	UEngramEntry_Grill_C_ExecuteUbergraph_EngramEntry_Grill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
