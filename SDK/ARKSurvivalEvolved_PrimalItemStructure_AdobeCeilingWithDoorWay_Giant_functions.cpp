// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeCeilingWithDoorWay_Giant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeCeilingWithDoorWay_Giant.PrimalItemStructure_AdobeCeilingWithDoorWay_Giant_C.ExecuteUbergraph_PrimalItemStructure_AdobeCeilingWithDoorWay_Giant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeCeilingWithDoorWay_Giant_C::ExecuteUbergraph_PrimalItemStructure_AdobeCeilingWithDoorWay_Giant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeCeilingWithDoorWay_Giant.PrimalItemStructure_AdobeCeilingWithDoorWay_Giant_C.ExecuteUbergraph_PrimalItemStructure_AdobeCeilingWithDoorWay_Giant");

	UPrimalItemStructure_AdobeCeilingWithDoorWay_Giant_C_ExecuteUbergraph_PrimalItemStructure_AdobeCeilingWithDoorWay_Giant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
