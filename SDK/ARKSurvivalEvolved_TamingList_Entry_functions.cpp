// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TamingList_Entry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TamingList_Entry.TamingList_Entry_C.ExecuteUbergraph_TamingList_Entry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTamingList_Entry_C::ExecuteUbergraph_TamingList_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TamingList_Entry.TamingList_Entry_C.ExecuteUbergraph_TamingList_Entry");

	UTamingList_Entry_C_ExecuteUbergraph_TamingList_Entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
