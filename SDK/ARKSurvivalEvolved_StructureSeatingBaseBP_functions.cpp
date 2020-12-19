// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSeatingBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureSeatingBaseBP.StructureSeatingBaseBP_C.UserConstructionScript
// ()

void AStructureSeatingBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSeatingBaseBP.StructureSeatingBaseBP_C.UserConstructionScript");

	AStructureSeatingBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureSeatingBaseBP.StructureSeatingBaseBP_C.ExecuteUbergraph_StructureSeatingBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureSeatingBaseBP_C::ExecuteUbergraph_StructureSeatingBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSeatingBaseBP.StructureSeatingBaseBP_C.ExecuteUbergraph_StructureSeatingBaseBP");

	AStructureSeatingBaseBP_C_ExecuteUbergraph_StructureSeatingBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
