// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Cannon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Cannon.PrimalItemStructure_Cannon_C.ExecuteUbergraph_PrimalItemStructure_Cannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Cannon_C::ExecuteUbergraph_PrimalItemStructure_Cannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Cannon.PrimalItemStructure_Cannon_C.ExecuteUbergraph_PrimalItemStructure_Cannon");

	UPrimalItemStructure_Cannon_C_ExecuteUbergraph_PrimalItemStructure_Cannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
