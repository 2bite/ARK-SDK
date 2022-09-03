// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Flag_Single_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Flag_Single.PrimalItemStructure_Flag_Single_C.ExecuteUbergraph_PrimalItemStructure_Flag_Single
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Flag_Single_C::ExecuteUbergraph_PrimalItemStructure_Flag_Single(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Flag_Single.PrimalItemStructure_Flag_Single_C.ExecuteUbergraph_PrimalItemStructure_Flag_Single");

	UPrimalItemStructure_Flag_Single_C_ExecuteUbergraph_PrimalItemStructure_Flag_Single_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
