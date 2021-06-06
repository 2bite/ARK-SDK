// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_GreenhouseWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_GreenhouseWall.PrimalItemStructure_GreenhouseWall_C.ExecuteUbergraph_PrimalItemStructure_GreenhouseWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_GreenhouseWall_C::ExecuteUbergraph_PrimalItemStructure_GreenhouseWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_GreenhouseWall.PrimalItemStructure_GreenhouseWall_C.ExecuteUbergraph_PrimalItemStructure_GreenhouseWall");

	UPrimalItemStructure_GreenhouseWall_C_ExecuteUbergraph_PrimalItemStructure_GreenhouseWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
