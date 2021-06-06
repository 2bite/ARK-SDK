// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Kaprosuchus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Kaprosuchus.EngramEntry_Saddle_Kaprosuchus_C.ExecuteUbergraph_EngramEntry_Saddle_Kaprosuchus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Kaprosuchus_C::ExecuteUbergraph_EngramEntry_Saddle_Kaprosuchus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Kaprosuchus.EngramEntry_Saddle_Kaprosuchus_C.ExecuteUbergraph_EngramEntry_Saddle_Kaprosuchus");

	UEngramEntry_Saddle_Kaprosuchus_C_ExecuteUbergraph_EngramEntry_Saddle_Kaprosuchus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
