// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekCloningChamber_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekCloningChamber.EngramEntry_TekCloningChamber_C.ExecuteUbergraph_EngramEntry_TekCloningChamber
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekCloningChamber_C::ExecuteUbergraph_EngramEntry_TekCloningChamber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekCloningChamber.EngramEntry_TekCloningChamber_C.ExecuteUbergraph_EngramEntry_TekCloningChamber");

	UEngramEntry_TekCloningChamber_C_ExecuteUbergraph_EngramEntry_TekCloningChamber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
