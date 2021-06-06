// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_GreenhouseWall_Sloped_Right_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_GreenhouseWall_Sloped_Right.PrimalItemStructure_GreenhouseWall_Sloped_Right_C.ExecuteUbergraph_PrimalItemStructure_GreenhouseWall_Sloped_Right
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_GreenhouseWall_Sloped_Right_C::ExecuteUbergraph_PrimalItemStructure_GreenhouseWall_Sloped_Right(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_GreenhouseWall_Sloped_Right.PrimalItemStructure_GreenhouseWall_Sloped_Right_C.ExecuteUbergraph_PrimalItemStructure_GreenhouseWall_Sloped_Right");

	UPrimalItemStructure_GreenhouseWall_Sloped_Right_C_ExecuteUbergraph_PrimalItemStructure_GreenhouseWall_Sloped_Right_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
