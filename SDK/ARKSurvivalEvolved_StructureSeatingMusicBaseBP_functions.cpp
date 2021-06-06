// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSeatingMusicBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureSeatingMusicBaseBP.StructureSeatingMusicBaseBP_C.UserConstructionScript
// ()

void AStructureSeatingMusicBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSeatingMusicBaseBP.StructureSeatingMusicBaseBP_C.UserConstructionScript");

	AStructureSeatingMusicBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureSeatingMusicBaseBP.StructureSeatingMusicBaseBP_C.ExecuteUbergraph_StructureSeatingMusicBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureSeatingMusicBaseBP_C::ExecuteUbergraph_StructureSeatingMusicBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSeatingMusicBaseBP.StructureSeatingMusicBaseBP_C.ExecuteUbergraph_StructureSeatingMusicBaseBP");

	AStructureSeatingMusicBaseBP_C_ExecuteUbergraph_StructureSeatingMusicBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
