// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MachinedSniper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MachinedSniper.EngramEntry_MachinedSniper_C.ExecuteUbergraph_EngramEntry_MachinedSniper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MachinedSniper_C::ExecuteUbergraph_EngramEntry_MachinedSniper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MachinedSniper.EngramEntry_MachinedSniper_C.ExecuteUbergraph_EngramEntry_MachinedSniper");

	UEngramEntry_MachinedSniper_C_ExecuteUbergraph_EngramEntry_MachinedSniper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
