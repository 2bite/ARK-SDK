// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChemBenchEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChemBenchEmitter.ChemBenchEmitter_C.UserConstructionScript
// ()

void AChemBenchEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChemBenchEmitter.ChemBenchEmitter_C.UserConstructionScript");

	AChemBenchEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChemBenchEmitter.ChemBenchEmitter_C.ExecuteUbergraph_ChemBenchEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AChemBenchEmitter_C::ExecuteUbergraph_ChemBenchEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChemBenchEmitter.ChemBenchEmitter_C.ExecuteUbergraph_ChemBenchEmitter");

	AChemBenchEmitter_C_ExecuteUbergraph_ChemBenchEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
