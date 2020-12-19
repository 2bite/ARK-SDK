// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Motorboat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Motorboat.EngramEntry_Motorboat_C.ExecuteUbergraph_EngramEntry_Motorboat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Motorboat_C::ExecuteUbergraph_EngramEntry_Motorboat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Motorboat.EngramEntry_Motorboat_C.ExecuteUbergraph_EngramEntry_Motorboat");

	UEngramEntry_Motorboat_C_ExecuteUbergraph_EngramEntry_Motorboat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
