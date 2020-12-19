// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Propellant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Propellant.PrimalItemResource_Propellant_C.ExecuteUbergraph_PrimalItemResource_Propellant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Propellant_C::ExecuteUbergraph_PrimalItemResource_Propellant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Propellant.PrimalItemResource_Propellant_C.ExecuteUbergraph_PrimalItemResource_Propellant");

	UPrimalItemResource_Propellant_C_ExecuteUbergraph_PrimalItemResource_Propellant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
