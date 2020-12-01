// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_PressurePlate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_PressurePlate.EngramEntry_PressurePlate_C.ExecuteUbergraph_EngramEntry_PressurePlate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_PressurePlate_C::ExecuteUbergraph_EngramEntry_PressurePlate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_PressurePlate.EngramEntry_PressurePlate_C.ExecuteUbergraph_EngramEntry_PressurePlate");

	UEngramEntry_PressurePlate_C_ExecuteUbergraph_EngramEntry_PressurePlate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
