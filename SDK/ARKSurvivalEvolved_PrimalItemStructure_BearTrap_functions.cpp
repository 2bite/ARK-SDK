// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BearTrap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BearTrap.PrimalItemStructure_BearTrap_C.ExecuteUbergraph_PrimalItemStructure_BearTrap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BearTrap_C::ExecuteUbergraph_PrimalItemStructure_BearTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BearTrap.PrimalItemStructure_BearTrap_C.ExecuteUbergraph_PrimalItemStructure_BearTrap");

	UPrimalItemStructure_BearTrap_C_ExecuteUbergraph_PrimalItemStructure_BearTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
