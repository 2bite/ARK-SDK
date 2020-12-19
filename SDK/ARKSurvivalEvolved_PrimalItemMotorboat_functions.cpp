// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemMotorboat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemMotorboat.PrimalItemMotorboat_C.ExecuteUbergraph_PrimalItemMotorboat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemMotorboat_C::ExecuteUbergraph_PrimalItemMotorboat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemMotorboat.PrimalItemMotorboat_C.ExecuteUbergraph_PrimalItemMotorboat");

	UPrimalItemMotorboat_C_ExecuteUbergraph_PrimalItemMotorboat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
