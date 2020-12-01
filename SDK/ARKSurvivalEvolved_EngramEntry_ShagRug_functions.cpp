// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ShagRug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ShagRug.EngramEntry_ShagRug_C.ExecuteUbergraph_EngramEntry_ShagRug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ShagRug_C::ExecuteUbergraph_EngramEntry_ShagRug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ShagRug.EngramEntry_ShagRug_C.ExecuteUbergraph_EngramEntry_ShagRug");

	UEngramEntry_ShagRug_C_ExecuteUbergraph_EngramEntry_ShagRug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
