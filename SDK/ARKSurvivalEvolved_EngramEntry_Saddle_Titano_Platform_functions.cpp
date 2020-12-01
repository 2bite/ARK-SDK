// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Titano_Platform_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Titano_Platform.EngramEntry_Saddle_Titano_Platform_C.ExecuteUbergraph_EngramEntry_Saddle_Titano_Platform
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Titano_Platform_C::ExecuteUbergraph_EngramEntry_Saddle_Titano_Platform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Titano_Platform.EngramEntry_Saddle_Titano_Platform_C.ExecuteUbergraph_EngramEntry_Saddle_Titano_Platform");

	UEngramEntry_Saddle_Titano_Platform_C_ExecuteUbergraph_EngramEntry_Saddle_Titano_Platform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
