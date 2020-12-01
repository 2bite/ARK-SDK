// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Saber_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Saber.EngramEntry_Saddle_Saber_C.ExecuteUbergraph_EngramEntry_Saddle_Saber
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Saber_C::ExecuteUbergraph_EngramEntry_Saddle_Saber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Saber.EngramEntry_Saddle_Saber_C.ExecuteUbergraph_EngramEntry_Saddle_Saber");

	UEngramEntry_Saddle_Saber_C_ExecuteUbergraph_EngramEntry_Saddle_Saber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
