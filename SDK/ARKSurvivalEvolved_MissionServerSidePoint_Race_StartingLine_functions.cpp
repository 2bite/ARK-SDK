// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionServerSidePoint_Race_StartingLine_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionServerSidePoint_Race_StartingLine.MissionServerSidePoint_Race_StartingLine_C.UserConstructionScript
// ()

void AMissionServerSidePoint_Race_StartingLine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_Race_StartingLine.MissionServerSidePoint_Race_StartingLine_C.UserConstructionScript");

	AMissionServerSidePoint_Race_StartingLine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionServerSidePoint_Race_StartingLine.MissionServerSidePoint_Race_StartingLine_C.ExecuteUbergraph_MissionServerSidePoint_Race_StartingLine
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionServerSidePoint_Race_StartingLine_C::ExecuteUbergraph_MissionServerSidePoint_Race_StartingLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_Race_StartingLine.MissionServerSidePoint_Race_StartingLine_C.ExecuteUbergraph_MissionServerSidePoint_Race_StartingLine");

	AMissionServerSidePoint_Race_StartingLine_C_ExecuteUbergraph_MissionServerSidePoint_Race_StartingLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
