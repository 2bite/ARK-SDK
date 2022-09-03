// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Flag_Fjordur_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Flag_Fjordur.PrimalItemStructure_Flag_Fjordur_C.ExecuteUbergraph_PrimalItemStructure_Flag_Fjordur
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Flag_Fjordur_C::ExecuteUbergraph_PrimalItemStructure_Flag_Fjordur(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Flag_Fjordur.PrimalItemStructure_Flag_Fjordur_C.ExecuteUbergraph_PrimalItemStructure_Flag_Fjordur");

	UPrimalItemStructure_Flag_Fjordur_C_ExecuteUbergraph_PrimalItemStructure_Flag_Fjordur_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
